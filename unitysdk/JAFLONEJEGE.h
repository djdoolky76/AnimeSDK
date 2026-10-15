#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADKFPNMPIDD.h"
#include "unitysdk/CCBBMJPLKME.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }

#define JAFLONEJEGE_CTOR_OFFSET UNITYSDK_OFFSET(0x16537420)
#define JAFLONEJEGE_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x16537160)
#define JAFLONEJEGE_IFOODPPCJIK_OFFSET UNITYSDK_OFFSET(0x16537070)
#define JAFLONEJEGE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x165371C0)
#define JAFLONEJEGE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16536810)
#define JAFLONEJEGE_LEOHPDFIKHB_OFFSET UNITYSDK_OFFSET(0x16536AF0)
#define JAFLONEJEGE_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x165368E0)
#define JAFLONEJEGE_NDFBMHNEKMD_OFFSET UNITYSDK_OFFSET(0x16536DB0)
#define JAFLONEJEGE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16536BC0)
#define JAFLONEJEGE_PODJJPBKLDC_OFFSET UNITYSDK_OFFSET(0x16536890)

inline static constexpr unsigned int JAFLONEJEGE_TypeDefinitionIndex = 56984;

	class JAFLONEJEGE : public ::ADKFPNMPIDD
	{
	public:
		::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x28
		::System::Boolean JNOJDHNPFFC; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 PJDCCMFAIIG; // 0x34
		::UnityEngine::Vector3 JDKBEHDOCFG; // 0x40
		::CCBBMJPLKME IGHAHBNLIJA; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLONEJEGE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::CCBBMJPLKME a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCBBMJPLKME))((::PBYTE)hIl2Cpp + JAFLONEJEGE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void PODJJPBKLDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLONEJEGE_PODJJPBKLDC_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLONEJEGE_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLONEJEGE_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAFLONEJEGE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean LEOHPDFIKHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLONEJEGE_LEOHPDFIKHB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLONEJEGE_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Boolean NDFBMHNEKMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLONEJEGE_NDFBMHNEKMD_OFFSET))(this);
		}

		::UnityEngine::Vector3 IFOODPPCJIK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLONEJEGE_IFOODPPCJIK_OFFSET))(this);
		}

	};
