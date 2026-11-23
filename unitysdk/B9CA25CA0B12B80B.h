#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/BA8D19A70805D75A.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class A44FA1F018372837;
class AA5DB82A3165D0B2;
class B3687AB065DF94CB;
class E1656225757ACE75;
class E3D26E29D73A2E4B;
class EC809F0017FC934F;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace ABC::Splines::CatmullRom { class Spline; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define B9CA25CA0B12B80B_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2537F10)
#define B9CA25CA0B12B80B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25381C0)
#define B9CA25CA0B12B80B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B9CA25CA0B12B80B_TypeDefinitionIndex = 5389;

class B9CA25CA0B12B80B : public ::System::Object
{
public:
	::System::UInt32 BBDA55B8B235A7F7; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B3687AB065DF94CB*>* ADC13D20E067241E; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::E1656225757ACE75*>* AD250F79463E2545; // 0x20
	::B3687AB065DF94CB* F3243A43F36B6DD9; // 0x28
	::A44FA1F018372837* B36CE75C4F1F5687; // 0x30
	::EC809F0017FC934F* AD978BD785E79C35; // 0x38
	::System::Collections::Generic::List_1<::E3D26E29D73A2E4B*>* E06EFC24AAE9F5DA; // 0x40
	::E68AA4EB51923C98::BA8D19A70805D75A B33CE0AC7B0427AC; // 0x48
	::System::Boolean AEE9FEB4ED0CD6E4; // 0x4C
	::System::Byte _padding1[0x3];
	::B3687AB065DF94CB* EA53A573689DF73B; // 0x50
	::System::Single E39015968245B5CC; // 0x58
	::System::Byte _padding2[0x4];
	::System::Collections::Generic::List_1<::AA5DB82A3165D0B2*>* AEC8FDC5E4E5F376; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ABC::Splines::CatmullRom::Spline*>* E7E7E476ED80CB4D; // 0x68
	::System::Boolean EECD94DD647753E2; // 0x70
	::System::Boolean AD4C99D9A1C507FE; // 0x71
	::System::Boolean B9B02EE07224BD0E; // 0x72
	::System::Boolean FE1DB1A9EB37E1B0; // 0x73
	::System::Boolean F495EEF0C120BE79; // 0x74

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + B9CA25CA0B12B80B_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B9CA25CA0B12B80B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B9CA25CA0B12B80B*&))((::PBYTE)hIl2Cpp + B9CA25CA0B12B80B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9CA25CA0B12B80B__CTOR_OFFSET))(this);
	}
};
