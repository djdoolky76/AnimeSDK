#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDMDLGNFCFB;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define FDMDLGNFCFB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x156D2C40)
#define FDMDLGNFCFB_COIGHOBFILM_OFFSET UNITYSDK_OFFSET(0x156D3360)
#define FDMDLGNFCFB_CTOR_OFFSET UNITYSDK_OFFSET(0x156D2D20)
#define FDMDLGNFCFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156D2F80)
#define FDMDLGNFCFB_HKPHJKJOBNK_OFFSET UNITYSDK_OFFSET(0x156D3100)
#define FDMDLGNFCFB_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0x156D2FD0)
#define FDMDLGNFCFB_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x156D30B0)
#define FDMDLGNFCFB_KOIEPHBLHID_OFFSET UNITYSDK_OFFSET(0x156D31E0)
#define FDMDLGNFCFB_NLFNKKLAFNC_OFFSET UNITYSDK_OFFSET(0x156D2D30)
#define FDMDLGNFCFB_OBJHGLDOLFA_OFFSET UNITYSDK_OFFSET(0x156D3140)
#define FDMDLGNFCFB_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0x156D2EA0)

inline static constexpr unsigned int FDMDLGNFCFB_TypeDefinitionIndex = 72056;

	class FDMDLGNFCFB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BCBPDLHNNGA; // 0x10
		::System::Int32 IGOOIJPDINC; // 0x18
		::System::Boolean FBMOGNBFNJD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_CTOR_OFFSET))(this);
		}

		static ::FDMDLGNFCFB* BPLPBPMEODA(::RPG::GameCore::EntityManager* a1)
		{
			return ((::FDMDLGNFCFB*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Int32 HKPHJKJOBNK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_HKPHJKJOBNK_OFFSET))(this);
		}

		::System::Boolean OBJHGLDOLFA(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_OBJHGLDOLFA_OFFSET))(this, a1);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void KOIEPHBLHID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_KOIEPHBLHID_OFFSET))(this, a1);
		}

		::System::Void COIGHOBFILM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_COIGHOBFILM_OFFSET))(this, a1);
		}

		::System::Void NLFNKKLAFNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMDLGNFCFB_NLFNKKLAFNC_OFFSET))(this);
		}

	};
