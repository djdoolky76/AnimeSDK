#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MFIMCKDKDKG;

#define GMAGAHGCOFD___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15AC5CA0)
#define GMAGAHGCOFD___C__DISPLAYCLASS30_0__REFRESHFIRETARGETS_B__0_OFFSET UNITYSDK_OFFSET(0x15AC94A0)

	class GMAGAHGCOFD___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MFIMCKDKDKG* context; // 0x10
		::UnityEngine::Vector3 ownerPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAGAHGCOFD___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshFireTargets_b__0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GMAGAHGCOFD___C__DISPLAYCLASS30_0__REFRESHFIRETARGETS_B__0_OFFSET))(this, a1, a2);
		}

	};
