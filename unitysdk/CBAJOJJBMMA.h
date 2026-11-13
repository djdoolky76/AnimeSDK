#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CBAJOJJBMMA_CTOR_OFFSET UNITYSDK_OFFSET(0x18FD3550)
#define CBAJOJJBMMA_GET_CONNECTEDPATH_OFFSET UNITYSDK_OFFSET(0x18FD3510)
#define CBAJOJJBMMA_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x18FD3530)
#define CBAJOJJBMMA_SET_CONNECTEDPATH_OFFSET UNITYSDK_OFFSET(0x18FD3520)
#define CBAJOJJBMMA_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x18FD3540)

inline static constexpr unsigned int CBAJOJJBMMA_TypeDefinitionIndex = 49988;

	class CBAJOJJBMMA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* LocalPos; // 0x10
		::Il2CppArray<::System::Single>* Direction; // 0x18
		::System::String* Description; // 0x20
		::System::String* Id; // 0x28
		::System::String* Name; // 0x30
		::System::String* _ConnectedPath_k__BackingField; // 0x38
		::System::Nullable_1<::System::Single> _Radius_k__BackingField; // 0x40
		::System::Nullable_1<::System::Single> Height; // 0x48
		::System::Nullable_1<::System::Single> Width; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAJOJJBMMA_CTOR_OFFSET))(this);
		}

		::System::String* get_ConnectedPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAJOJJBMMA_GET_CONNECTEDPATH_OFFSET))(this);
		}

		::System::Void set_ConnectedPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CBAJOJJBMMA_SET_CONNECTEDPATH_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Single> get_Radius()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAJOJJBMMA_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CBAJOJJBMMA_SET_RADIUS_OFFSET))(this, a1);
		}

	};
