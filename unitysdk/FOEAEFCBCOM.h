#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/System/Object.h"
class FOEAEFCBCOM;

#define FOEAEFCBCOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x16814090)
#define FOEAEFCBCOM_COMPARETO_OFFSET UNITYSDK_OFFSET(0x16814010)
#define FOEAEFCBCOM_CTOR_OFFSET UNITYSDK_OFFSET(0x16814080)

inline static constexpr unsigned int FOEAEFCBCOM_TypeDefinitionIndex = 56838;

	class FOEAEFCBCOM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillLayoutKey>* HHMKJMFNEPO; // 0x10
		::System::Int32 NALMBOOCCIN; // 0x18
		::System::Boolean EMLCJLOIMDK; // 0x1C
		::System::Boolean NIFCBHHPIGD; // 0x1D
		static ::FOEAEFCBCOM** StaticGet_HGLIFJGHADE()
		{
			return (::FOEAEFCBCOM**)UnitySDK::FromName("", "FOEAEFCBCOM")->GetStaticField(0x417C0);
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
