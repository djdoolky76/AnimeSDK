#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Internal { class ObjectSerializationInfo_OrderBaseTypesBeforeDerivedTypes; }
namespace System { class Type; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBABB20)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BBAB920)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBAB910)

namespace MessagePack::Internal
{
	class ObjectSerializationInfo_OrderBaseTypesBeforeDerivedTypes : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::ObjectSerializationInfo_OrderBaseTypesBeforeDerivedTypes** StaticGet_Instance()
		{
			return (::MessagePack::Internal::ObjectSerializationInfo_OrderBaseTypesBeforeDerivedTypes**)UnitySDK::FromName("MessagePack.Internal", "OrderBaseTypesBeforeDerivedTypes")->GetStaticField(0x26380);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES_COMPARE_OFFSET))(this, a1, a2);
		}

	};
}
