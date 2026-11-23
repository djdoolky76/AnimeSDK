#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BDC595893C6EE433_BBBA612D685C49EE_A7A9963450EA9704_OFFSET UNITYSDK_OFFSET(0x4184340)
#define BDC595893C6EE433_BBBA612D685C49EE_EBA69255274E5D31_OFFSET UNITYSDK_OFFSET(0x4184280)
#define BDC595893C6EE433_BBBA612D685C49EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x4184300)

namespace BDC595893C6EE433
{
	inline static constexpr unsigned int BBBA612D685C49EE_TypeDefinitionIndex = 17703;

	class BBBA612D685C49EE : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_AFD3F7C43FED32DD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BBBA612D685C49EE_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Int32 A7A9963450EA9704()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BDC595893C6EE433_BBBA612D685C49EE_A7A9963450EA9704_OFFSET))();
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDC595893C6EE433_BBBA612D685C49EE__CCTOR_OFFSET))();
		}

		static ::System::Void EBA69255274E5D31(::System::Int32& B8FEC1D2D20A18F0)
		{
			return ((::System::Void(*)(::System::Int32&))((::PBYTE)hIl2Cpp + BDC595893C6EE433_BBBA612D685C49EE_EBA69255274E5D31_OFFSET))(B8FEC1D2D20A18F0);
		}
	};
}
