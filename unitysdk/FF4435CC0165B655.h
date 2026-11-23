#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class E5C9FFE6D426541B;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define FF4435CC0165B655_A31B52E9C3EF5357_OFFSET UNITYSDK_OFFSET(0x2327230)
#define FF4435CC0165B655_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define FF4435CC0165B655_F1A6878898C59446_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define FF4435CC0165B655_F1F08E8E6F96D024_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define FF4435CC0165B655_F335D9A62B2C751D_OFFSET UNITYSDK_OFFSET(0x2327240)
#define FF4435CC0165B655_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23E28A0)
#define FF4435CC0165B655__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FF4435CC0165B655_TypeDefinitionIndex = 3878;

class FF4435CC0165B655 : public ::System::Object
{
public:
	::System::Single F8E5BC46364DB6A5; // 0x10
	::System::Byte _padding0[0x4];
	::E5C9FFE6D426541B* B708C4C9BF090428; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF4435CC0165B655__CTOR_OFFSET))(this);
	}

	::System::Single A31B52E9C3EF5357()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FF4435CC0165B655_A31B52E9C3EF5357_OFFSET))(this);
	}

	::System::Void F1A6878898C59446(::E5C9FFE6D426541B* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::E5C9FFE6D426541B*))((::PBYTE)hIl2Cpp + FF4435CC0165B655_F1A6878898C59446_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + FF4435CC0165B655_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FF4435CC0165B655*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FF4435CC0165B655*&))((::PBYTE)hIl2Cpp + FF4435CC0165B655_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F335D9A62B2C751D(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FF4435CC0165B655_F335D9A62B2C751D_OFFSET))(this, E937D4885DAA1AE8);
	}

	::E5C9FFE6D426541B* F1F08E8E6F96D024()
	{
		return ((::E5C9FFE6D426541B*(*)(::PVOID))((::PBYTE)hIl2Cpp + FF4435CC0165B655_F1F08E8E6F96D024_OFFSET))(this);
	}
};
