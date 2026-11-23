#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B6BC140D8813EC54/BB193628BB9A54C0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AF7290E01E012C43.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BE171BA9ED2EB0A1_A6CB705805D6989D_OFFSET UNITYSDK_OFFSET(0x2A21EF0)
#define BE171BA9ED2EB0A1_AA7530401F2E3726_OFFSET UNITYSDK_OFFSET(0x2A22D00)
#define BE171BA9ED2EB0A1_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x2A22DC0)
#define BE171BA9ED2EB0A1__CTOR_OFFSET UNITYSDK_OFFSET(0x2A22DA0)

inline static constexpr unsigned int BE171BA9ED2EB0A1_TypeDefinitionIndex = 15970;

class BE171BA9ED2EB0A1 : public ::System::Object
{
public:
	static ::BE171BA9ED2EB0A1** StaticGet_E0E7A5F93551109B()
	{
		return (::BE171BA9ED2EB0A1**)Il2CppClass::FromTypeDefinitionIndex(BE171BA9ED2EB0A1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::UnityEngine::AF7290E01E012C43, ::System::Int32>* FADA08FD8D4F430C; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::AF7290E01E012C43, ::System::Int32>* BD1E6CDB69901394; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE171BA9ED2EB0A1__CTOR_OFFSET))(this);
	}

	::System::Boolean AA7530401F2E3726(::UnityEngine::AF7290E01E012C43 A5C299C395D3E1B2, ::System::Int32& AC6A3121018D8761, ::B6BC140D8813EC54::BB193628BB9A54C0& E55695FF4F436498)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AF7290E01E012C43, ::System::Int32&, ::B6BC140D8813EC54::BB193628BB9A54C0&))((::PBYTE)hIl2Cpp + BE171BA9ED2EB0A1_AA7530401F2E3726_OFFSET))(this, A5C299C395D3E1B2, AC6A3121018D8761, E55695FF4F436498);
	}

	::System::Void A6CB705805D6989D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE171BA9ED2EB0A1_A6CB705805D6989D_OFFSET))(this);
	}

	static ::BE171BA9ED2EB0A1* F7B0A23335A3DB16()
	{
		return ((::BE171BA9ED2EB0A1*(*)())((::PBYTE)hIl2Cpp + BE171BA9ED2EB0A1_F7B0A23335A3DB16_OFFSET))();
	}
};
