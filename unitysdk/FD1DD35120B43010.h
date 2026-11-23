#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/FC814F9B9EA39DC4.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define FD1DD35120B43010_A2A56FC78E17FFEC_OFFSET UNITYSDK_OFFSET(0x2343E70)
#define FD1DD35120B43010_B4D89FD2EDDD066D_OFFSET UNITYSDK_OFFSET(0x167AE20)
#define FD1DD35120B43010_BF1C40E65504BCC9_OFFSET UNITYSDK_OFFSET(0x167AE10)
#define FD1DD35120B43010_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x237DE00)
#define FD1DD35120B43010_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26897C0)
#define FD1DD35120B43010_FBF2A059547ABCDC_OFFSET UNITYSDK_OFFSET(0x2343E60)
#define FD1DD35120B43010__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FD1DD35120B43010_TypeDefinitionIndex = 6436;

class FD1DD35120B43010 : public ::FC814F9B9EA39DC4
{
public:
	::System::Boolean FC26B0BC7A159A0E; // 0x30
	::System::Boolean AF80BCEB0A741794; // 0x31

	::System::Void A2A56FC78E17FFEC(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FD1DD35120B43010_A2A56FC78E17FFEC_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Boolean BF1C40E65504BCC9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FD1DD35120B43010_BF1C40E65504BCC9_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FD1DD35120B43010*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FD1DD35120B43010*&))((::PBYTE)hIl2Cpp + FD1DD35120B43010_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD1DD35120B43010__CTOR_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + FD1DD35120B43010_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Boolean FBF2A059547ABCDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FD1DD35120B43010_FBF2A059547ABCDC_OFFSET))(this);
	}

	::System::Void B4D89FD2EDDD066D(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FD1DD35120B43010_B4D89FD2EDDD066D_OFFSET))(this, E937D4885DAA1AE8);
	}
};
