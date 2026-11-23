#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACA63C0E854411D2.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F2DD5C9813614DFD_AB2985FD04A22FB3_OFFSET UNITYSDK_OFFSET(0x165A480)
#define F2DD5C9813614DFD_ACBEADB091F39F84_OFFSET UNITYSDK_OFFSET(0x165A410)
#define F2DD5C9813614DFD_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x24FD6D0)
#define F2DD5C9813614DFD_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24FD8F0)
#define F2DD5C9813614DFD__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int F2DD5C9813614DFD_TypeDefinitionIndex = 5143;

class F2DD5C9813614DFD : public ::ACA63C0E854411D2
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>* A39B972840A8050B; // 0x38

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F2DD5C9813614DFD_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>* ACBEADB091F39F84()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F2DD5C9813614DFD_ACBEADB091F39F84_OFFSET))(this);
	}

	::System::Void AB2985FD04A22FB3(::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>*))((::PBYTE)hIl2Cpp + F2DD5C9813614DFD_AB2985FD04A22FB3_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2DD5C9813614DFD__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F2DD5C9813614DFD*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F2DD5C9813614DFD*&))((::PBYTE)hIl2Cpp + F2DD5C9813614DFD_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
