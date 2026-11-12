#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IMNECEGBJLE;
class KBOGKMCJGAO;
namespace System { class String; }

#define IMNECEGBJLE_BAPACPLOLNH_OFFSET UNITYSDK_OFFSET(0xB8108D0)
#define IMNECEGBJLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB810AC0)
#define IMNECEGBJLE_EJDOLLILIMM_OFFSET UNITYSDK_OFFSET(0xB810860)
#define IMNECEGBJLE_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB810A50)
#define IMNECEGBJLE_LDCLEJOIMFL_OFFSET UNITYSDK_OFFSET(0xB810870)

inline static constexpr unsigned int IMNECEGBJLE_TypeDefinitionIndex = 57735;

	class IMNECEGBJLE : public ::System::Object
	{
	public:
		static ::IMNECEGBJLE** StaticGet_EMLNOINPICJ()
		{
			return (::IMNECEGBJLE**)UnitySDK::FromName("", "IMNECEGBJLE")->GetStaticField(0x54F20);
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
