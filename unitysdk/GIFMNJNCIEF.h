#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GIFMNJNCIEF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A29520)
#define GIFMNJNCIEF_DBGDODKGEMH_OFFSET UNITYSDK_OFFSET(0x15A294C0)
#define GIFMNJNCIEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A28D90)
#define GIFMNJNCIEF_HBFMMNAELCB_OFFSET UNITYSDK_OFFSET(0x15A29070)
#define GIFMNJNCIEF_JBEIEMKENFI_OFFSET UNITYSDK_OFFSET(0x15A28E90)
#define GIFMNJNCIEF_OCKPBEPBMCJ_OFFSET UNITYSDK_OFFSET(0x15A28E30)
#define GIFMNJNCIEF_PBOONHAEAKO_OFFSET UNITYSDK_OFFSET(0x15A28F80)

inline static constexpr unsigned int GIFMNJNCIEF_TypeDefinitionIndex = 80310;

	class GIFMNJNCIEF : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* IIAELGFJDEG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFMNJNCIEF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFMNJNCIEF_DISPOSE_OFFSET))(this);
		}

		::System::Boolean OCKPBEPBMCJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIFMNJNCIEF_OCKPBEPBMCJ_OFFSET))(this, a1);
		}

		::System::Boolean JBEIEMKENFI(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + GIFMNJNCIEF_JBEIEMKENFI_OFFSET))(this, a1);
		}

		::System::Boolean PBOONHAEAKO(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + GIFMNJNCIEF_PBOONHAEAKO_OFFSET))(this, a1);
		}

		::System::Void HBFMMNAELCB(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GIFMNJNCIEF_HBFMMNAELCB_OFFSET))(this, a1);
		}

		::System::Void DBGDODKGEMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIFMNJNCIEF_DBGDODKGEMH_OFFSET))(this, a1);
		}

	};
