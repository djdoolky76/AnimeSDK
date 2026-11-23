#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BC8A073F093116B5.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class BCBBF83CCD4A07F8;
class F2004B69BD346DB7;
class FC21A125C38120E4;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define E660B34618B4B570_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2510030)
#define E660B34618B4B570_FA079206F1855950_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E660B34618B4B570_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25101A0)
#define E660B34618B4B570_FC975859F547237C_OFFSET UNITYSDK_OFFSET(0x250FE10)
#define E660B34618B4B570_FE9E42E41D770021_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define E660B34618B4B570__CTOR_OFFSET UNITYSDK_OFFSET(0x2510390)

inline static constexpr unsigned int E660B34618B4B570_TypeDefinitionIndex = 5239;

class E660B34618B4B570 : public ::BC8A073F093116B5
{
public:
	::FA9B773E8C9B97E9<::BCBBF83CCD4A07F8*>* E571F0E65DF3B7CD; // 0x18

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + E660B34618B4B570_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::System::Collections::Generic::List_1<::FC21A125C38120E4*>*, ::System::UInt32>>* FC975859F547237C()
	{
		return ((::System::Collections::Generic::List_1<::B07850EA97DBB75A<::System::Collections::Generic::List_1<::FC21A125C38120E4*>*, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E660B34618B4B570_FC975859F547237C_OFFSET))(this);
	}

	::System::Void FE9E42E41D770021(::FA9B773E8C9B97E9<::BCBBF83CCD4A07F8*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::BCBBF83CCD4A07F8*>*))((::PBYTE)hIl2Cpp + E660B34618B4B570_FE9E42E41D770021_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E660B34618B4B570*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E660B34618B4B570*&))((::PBYTE)hIl2Cpp + E660B34618B4B570_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::FA9B773E8C9B97E9<::BCBBF83CCD4A07F8*>* FA079206F1855950()
	{
		return ((::FA9B773E8C9B97E9<::BCBBF83CCD4A07F8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E660B34618B4B570_FA079206F1855950_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E660B34618B4B570__CTOR_OFFSET))(this);
	}
};
