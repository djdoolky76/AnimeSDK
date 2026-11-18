#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class KGCPMGNHCNN_ABHKCBLDILM;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class String; }

#define KGCPMGNHCNN_OCGEIKPANOE_ALDHJHMLDCI_OFFSET UNITYSDK_OFFSET(0x157E9C40)
#define KGCPMGNHCNN_OCGEIKPANOE_GGICNNKDOJK_OFFSET UNITYSDK_OFFSET(0x157E9DC0)
#define KGCPMGNHCNN_OCGEIKPANOE_MPEEHELNBMI_OFFSET UNITYSDK_OFFSET(0x157E9D00)
#define KGCPMGNHCNN_OCGEIKPANOE__CTOR_OFFSET UNITYSDK_OFFSET(0x157E9C30)

inline static constexpr unsigned int KGCPMGNHCNN_OCGEIKPANOE_TypeDefinitionIndex = 72617;

class KGCPMGNHCNN_OCGEIKPANOE : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::ValueTuple_2<::System::Boolean, ::System::String*>>* BOIBONJOJKH; // 0x10
	::KGCPMGNHCNN_ABHKCBLDILM* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_OCGEIKPANOE__CTOR_OFFSET))(this);
	}

	::System::Void ALDHJHMLDCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_OCGEIKPANOE_ALDHJHMLDCI_OFFSET))(this);
	}

	::System::Void MPEEHELNBMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_OCGEIKPANOE_MPEEHELNBMI_OFFSET))(this);
	}

	::System::Void GGICNNKDOJK(::System::String* LCEGOBBEECM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_OCGEIKPANOE_GGICNNKDOJK_OFFSET))(this, LCEGOBBEECM);
	}
};
