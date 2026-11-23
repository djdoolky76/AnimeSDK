#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A234F4244A3C0422;
class B7D0057521E6AFEB;
class BF148C434ED56BCE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class FAED0374422E783A; }

#define F1721F544D972202_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x251ABF0)
#define F1721F544D972202__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F1721F544D972202_TypeDefinitionIndex = 5199;

class F1721F544D972202 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* E00C242758378ABB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* AFEFCB7829D7095F; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::B7D0057521E6AFEB*>* E2904DC1CF9479B9; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::FAED0374422E783A*>* A5407C3867590C1F; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::A234F4244A3C0422*>* B38D3D228244D75F; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::B7D0057521E6AFEB*>* EDD2F512A605FA56; // 0x38
	::BF148C434ED56BCE* F62193237C20B43F; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1721F544D972202__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F1721F544D972202*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F1721F544D972202*&))((::PBYTE)hIl2Cpp + F1721F544D972202_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
