#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PMGIMPDMIKC;
namespace System { class String; }

#define HJMFDDMHOJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB2BD0)

inline static constexpr unsigned int HJMFDDMHOJC_TypeDefinitionIndex = 44668;

	class HJMFDDMHOJC : public ::System::Object
	{
	public:
		::System::String* PFAHDCPHKIH; // 0x10
		::Il2CppArray<::PMGIMPDMIKC*>* JLFFNDBKBOA; // 0x18
		::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0x20
		::RPG::GameCore::FixPoint EMFGEFNHOIB; // 0x28
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x30
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x3C
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x48
		::System::Int32 NJIOMOHBILM; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint PJCLCODCBKN; // 0x60
		::System::UInt32 OLGJGECHDOF; // 0x68
		::System::Boolean MBNJBEPIIGJ; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMFDDMHOJC_CTOR_OFFSET))(this);
		}

	};
