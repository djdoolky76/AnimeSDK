#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E8C1635F85E9BC30.h"

namespace System { class Object; }

#define SYSTEM_FE438F7690E41ABA_B863A1691FC0F1E7_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define SYSTEM_FE438F7690E41ABA__CTOR_OFFSET UNITYSDK_OFFSET(0x3D10480)

namespace System
{
	inline static constexpr unsigned int FE438F7690E41ABA_TypeDefinitionIndex = 10776;

	class FE438F7690E41ABA : public ::E8C1635F85E9BC30
	{
	public:
		::System::Object* B45F8968DAF2AF54; // 0x10
		::System::Boolean BCA594B1F41B4F13; // 0x18

		::System::Object* B863A1691FC0F1E7()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FE438F7690E41ABA_B863A1691FC0F1E7_OFFSET))(this);
		}

		::System::Void _ctor(::System::Object* E2B6D81F69EA0D9B, ::System::Boolean F22013362A791D17)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_FE438F7690E41ABA__CTOR_OFFSET))(this, E2B6D81F69EA0D9B, F22013362A791D17);
		}
	};
}
