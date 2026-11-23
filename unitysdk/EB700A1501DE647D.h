#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EB700A1501DE647D_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x28233D0)
#define EB700A1501DE647D__CTOR_OFFSET UNITYSDK_OFFSET(0x2823450)

inline static constexpr unsigned int EB700A1501DE647D_TypeDefinitionIndex = 16840;

class EB700A1501DE647D : public ::System::Object
{
public:
	::System::Boolean BD81732519FE60C8; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 E81D76EB7503DDD6; // 0x14
	::System::Int32 BF0D82D7AAF8CA84; // 0x18
	::System::Int32 AE3C5F6A39BB4799; // 0x1C
	::UnityEngine::Vector3 A0F19E145B1E5EDC; // 0x20
	::System::Single EA05F70E312FFCB8; // 0x2C
	::System::Collections::Generic::List_1<::UnityEngine::E8984F4E44AE20E5>* F9A489BE05BD61E4; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* F42689B146774BE7; // 0x38
	::System::Int32 FF606BB3A107A3A0; // 0x40
	::System::Int32 F153B7CB34460A6A; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB700A1501DE647D__CTOR_OFFSET))(this);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB700A1501DE647D_F0D2AFBD3CAE7F65_OFFSET))(this);
	}
};
