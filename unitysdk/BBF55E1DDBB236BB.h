#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E908CCDC41CF7273;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBF55E1DDBB236BB_E418F0465D522CDA_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BBF55E1DDBB236BB_E9A85024D0749B8A_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BBF55E1DDBB236BB_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define BBF55E1DDBB236BB_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2501BA0)
#define BBF55E1DDBB236BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BBF55E1DDBB236BB_TypeDefinitionIndex = 5114;

class BBF55E1DDBB236BB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E908CCDC41CF7273*>* A308001B53299B3B; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BBF55E1DDBB236BB*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BBF55E1DDBB236BB*&))((::PBYTE)hIl2Cpp + BBF55E1DDBB236BB_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBF55E1DDBB236BB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E908CCDC41CF7273*>* E9A85024D0749B8A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E908CCDC41CF7273*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBF55E1DDBB236BB_E9A85024D0749B8A_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::E908CCDC41CF7273* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E908CCDC41CF7273*))((::PBYTE)hIl2Cpp + BBF55E1DDBB236BB_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void E418F0465D522CDA(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E908CCDC41CF7273*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E908CCDC41CF7273*>*))((::PBYTE)hIl2Cpp + BBF55E1DDBB236BB_E418F0465D522CDA_OFFSET))(this, E937D4885DAA1AE8);
	}
};
