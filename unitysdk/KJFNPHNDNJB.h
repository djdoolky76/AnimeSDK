#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
namespace System { class Object; }

#define KJFNPHNDNJB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DD6C850)
#define KJFNPHNDNJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6DA50)
#define KJFNPHNDNJB_FKIACCHIBFN_OFFSET UNITYSDK_OFFSET(0x1DD6C730)
#define KJFNPHNDNJB_PBNCKDHDCAE_OFFSET UNITYSDK_OFFSET(0x1DD6C5A0)

	class KJFNPHNDNJB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFNPHNDNJB_CTOR_OFFSET))(this);
		}

		static ::System::Void PBNCKDHDCAE(::Il2CppArray<::System::Object*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KJFNPHNDNJB_PBNCKDHDCAE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single FKIACCHIBFN(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KJFNPHNDNJB_FKIACCHIBFN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean BPLPBPMEODA(::Il2CppArray<::RPG::MVector2>* a1, ::System::Object* a2, ::Il2CppArray<::System::Int32>* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::MVector2>*, ::System::Object*, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KJFNPHNDNJB_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
