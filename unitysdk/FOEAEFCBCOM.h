#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/System/Object.h"
class FOEAEFCBCOM;

#define FOEAEFCBCOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x158E5830)
#define FOEAEFCBCOM_COMPARETO_OFFSET UNITYSDK_OFFSET(0x158E57B0)
#define FOEAEFCBCOM_CTOR_OFFSET UNITYSDK_OFFSET(0x158E5820)

	class FOEAEFCBCOM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillLayoutKey>* HHMKJMFNEPO; // 0x10
		::System::Boolean NIFCBHHPIGD; // 0x18
		::System::Boolean EMLCJLOIMDK; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 NALMBOOCCIN; // 0x1C
		static ::FOEAEFCBCOM** StaticGet_HGLIFJGHADE()
		{
			return (::FOEAEFCBCOM**)UnitySDK::FromName("", "FOEAEFCBCOM")->GetStaticField(0x47DC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEAEFCBCOM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOEAEFCBCOM_CCTOR_OFFSET))();
		}

		::System::Int32 CompareTo(::FOEAEFCBCOM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FOEAEFCBCOM*))((::PBYTE)hIl2Cpp + FOEAEFCBCOM_COMPARETO_OFFSET))(this, a1);
		}

	};
