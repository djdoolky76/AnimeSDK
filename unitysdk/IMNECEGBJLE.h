#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IMNECEGBJLE;
class KBOGKMCJGAO;
namespace System { class String; }

#define IMNECEGBJLE_BAPACPLOLNH_OFFSET UNITYSDK_OFFSET(0x164E0FA0)
#define IMNECEGBJLE_CTOR_OFFSET UNITYSDK_OFFSET(0x164E1190)
#define IMNECEGBJLE_EJDOLLILIMM_OFFSET UNITYSDK_OFFSET(0x164E0F30)
#define IMNECEGBJLE_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x164E1120)
#define IMNECEGBJLE_LDCLEJOIMFL_OFFSET UNITYSDK_OFFSET(0x164E0F40)

inline static constexpr unsigned int IMNECEGBJLE_TypeDefinitionIndex = 56515;

	class IMNECEGBJLE : public ::System::Object
	{
	public:
		static ::IMNECEGBJLE** StaticGet_EMLNOINPICJ()
		{
			return (::IMNECEGBJLE**)UnitySDK::FromName("", "IMNECEGBJLE")->GetStaticField(0x6C310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNECEGBJLE_CTOR_OFFSET))(this);
		}

		::System::String* EJDOLLILIMM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNECEGBJLE_EJDOLLILIMM_OFFSET))(this);
		}

		::System::String* LDCLEJOIMFL(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IMNECEGBJLE_LDCLEJOIMFL_OFFSET))(this, a1);
		}

		::FCOEMCEDLNL* BAPACPLOLNH(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::FCOEMCEDLNL*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + IMNECEGBJLE_BAPACPLOLNH_OFFSET))(this, a1, a2, a3);
		}

		static ::KBOGKMCJGAO* GGBLHEHJBDO()
		{
			return ((::KBOGKMCJGAO*(*)())((::PBYTE)hIl2Cpp + IMNECEGBJLE_GGBLHEHJBDO_OFFSET))();
		}

	};
