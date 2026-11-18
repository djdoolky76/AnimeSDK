#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FICPDKBMDCK_JPIBFJPIGPD_OFFSET UNITYSDK_OFFSET(0x11C503C0)
#define FICPDKBMDCK_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x11C50370)
#define FICPDKBMDCK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11C4FD60)
#define FICPDKBMDCK__CTOR_2_OFFSET UNITYSDK_OFFSET(0x11C4FEE0)
#define FICPDKBMDCK__CTOR_3_OFFSET UNITYSDK_OFFSET(0x11C50070)
#define FICPDKBMDCK__CTOR_4_OFFSET UNITYSDK_OFFSET(0x11C501F0)
#define FICPDKBMDCK__CTOR_OFFSET UNITYSDK_OFFSET(0x11C4FCD0)

inline static constexpr unsigned int FICPDKBMDCK_TypeDefinitionIndex = 43870;

class FICPDKBMDCK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeGraph::VariantUnion>* ECADJEKBCCD; // 0x10
	::System::Collections::Generic::List_1<::NodeGraph::VariantUnion>* GECCHCDNAHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICPDKBMDCK__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FICPDKBMDCK__CTOR_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void _ctor_2(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FICPDKBMDCK__CTOR_2_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void _ctor_3(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FICPDKBMDCK__CTOR_3_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void _ctor_4(::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FICPDKBMDCK__CTOR_4_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FICPDKBMDCK_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Boolean JPIBFJPIGPD(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FICPDKBMDCK_JPIBFJPIGPD_OFFSET))(this, ABHBKFJKINO);
	}
};
