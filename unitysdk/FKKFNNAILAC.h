#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKKFNNAILAC;
namespace RPG::GameCore { class AvatarRowData; }

#define FKKFNNAILAC_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x157FB3E0)
#define FKKFNNAILAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x157FB420)
#define FKKFNNAILAC_CTOR_OFFSET UNITYSDK_OFFSET(0x157FB3D0)

inline static constexpr unsigned int FKKFNNAILAC_TypeDefinitionIndex = 51993;

	class FKKFNNAILAC : public ::System::Object
	{
	public:
		static ::FKKFNNAILAC** StaticGet_FMJPMFEDIJL()
		{
			return (::FKKFNNAILAC**)UnitySDK::FromName("", "FKKFNNAILAC")->GetStaticField(0x24A80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKFNNAILAC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKFNNAILAC_CCTOR_OFFSET))();
		}

		::RPG::GameCore::AvatarRowData* ANALOEDDDHD()
		{
			return ((::RPG::GameCore::AvatarRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKFNNAILAC_ANALOEDDDHD_OFFSET))(this);
		}

	};
