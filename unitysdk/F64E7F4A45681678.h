#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B6BC140D8813EC54/BB193628BB9A54C0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AF7290E01E012C43.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F64E7F4A45681678_A6CB705805D6989D_OFFSET UNITYSDK_OFFSET(0x2A200A0)
#define F64E7F4A45681678_AA7530401F2E3726_OFFSET UNITYSDK_OFFSET(0x2A20120)
#define F64E7F4A45681678_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x2A20250)
#define F64E7F4A45681678__CTOR_OFFSET UNITYSDK_OFFSET(0x2A201D0)

inline static constexpr unsigned int F64E7F4A45681678_TypeDefinitionIndex = 15981;

class F64E7F4A45681678 : public ::System::Object
{
public:
	static ::F64E7F4A45681678** StaticGet_E0E7A5F93551109B()
	{
		return (::F64E7F4A45681678**)Il2CppClass::FromTypeDefinitionIndex(F64E7F4A45681678_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::UnityEngine::AF7290E01E012C43, ::System::Int32>* FADA08FD8D4F430C; // 0x10

	::System::Boolean AA7530401F2E3726(::UnityEngine::AF7290E01E012C43 A5C299C395D3E1B2, ::System::Int32& AC6A3121018D8761, ::B6BC140D8813EC54::BB193628BB9A54C0& E55695FF4F436498)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AF7290E01E012C43, ::System::Int32&, ::B6BC140D8813EC54::BB193628BB9A54C0&))((::PBYTE)hIl2Cpp + F64E7F4A45681678_AA7530401F2E3726_OFFSET))(this, A5C299C395D3E1B2, AC6A3121018D8761, E55695FF4F436498);
	}

	static ::F64E7F4A45681678* F7B0A23335A3DB16()
	{
		return ((::F64E7F4A45681678*(*)())((::PBYTE)hIl2Cpp + F64E7F4A45681678_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Void A6CB705805D6989D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F64E7F4A45681678_A6CB705805D6989D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F64E7F4A45681678__CTOR_OFFSET))(this);
	}
};
