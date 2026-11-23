#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F962BB4FAE46F9DB_A132109AB742AE48_OFFSET UNITYSDK_OFFSET(0x1F5F370)
#define F962BB4FAE46F9DB_AB2985FD04A22FB3_OFFSET UNITYSDK_OFFSET(0x16E1590)
#define F962BB4FAE46F9DB_ACBEADB091F39F84_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define F962BB4FAE46F9DB_AF5551CC571DD40D_OFFSET UNITYSDK_OFFSET(0x240D220)
#define F962BB4FAE46F9DB_B1AF8F961D975E44_OFFSET UNITYSDK_OFFSET(0x1BCACB0)
#define F962BB4FAE46F9DB_B59A8AF4AD062023_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define F962BB4FAE46F9DB_E333AFBE248BFDBF_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define F962BB4FAE46F9DB_E3F96A885CF475B2_OFFSET UNITYSDK_OFFSET(0x1F5F360)
#define F962BB4FAE46F9DB_EA1B5406E17113A2_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define F962BB4FAE46F9DB_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x240CAB0)
#define F962BB4FAE46F9DB_F590FD1E0D12E1FB_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define F962BB4FAE46F9DB_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x240CC90)
#define F962BB4FAE46F9DB_FDC8E1B056F7DBA3_OFFSET UNITYSDK_OFFSET(0x2371680)
#define F962BB4FAE46F9DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F962BB4FAE46F9DB_TypeDefinitionIndex = 4189;

class F962BB4FAE46F9DB : public ::System::Object
{
public:
	::System::UInt32 FA119371FAD812D0; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* A2C6315B15049335; // 0x18
	::System::UInt32 B131ADF9C875B761; // 0x20
	::System::Byte _padding1[0x4];
	::ABC::Config::WwiseEvent EC36DA5D1321E7AE; // 0x28
	::ABC::Config::WwiseEvent A60E70B0ECBF26D8; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>* A39B972840A8050B; // 0x48

	::System::Void F590FD1E0D12E1FB(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_F590FD1E0D12E1FB_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void FDC8E1B056F7DBA3(::ABC::Config::WwiseEvent E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::WwiseEvent))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_FDC8E1B056F7DBA3_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void AB2985FD04A22FB3(::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>*))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_AB2985FD04A22FB3_OFFSET))(this, E937D4885DAA1AE8);
	}

	::ABC::Config::WwiseEvent A132109AB742AE48()
	{
		return ((::ABC::Config::WwiseEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_A132109AB742AE48_OFFSET))(this);
	}

	::ABC::Config::WwiseEvent E3F96A885CF475B2()
	{
		return ((::ABC::Config::WwiseEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_E3F96A885CF475B2_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F962BB4FAE46F9DB*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F962BB4FAE46F9DB*&))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB__CTOR_OFFSET))(this);
	}

	::System::Void EA1B5406E17113A2(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_EA1B5406E17113A2_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void B1AF8F961D975E44(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_B1AF8F961D975E44_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>* ACBEADB091F39F84()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::E865F6F8B8B44C1E>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_ACBEADB091F39F84_OFFSET))(this);
	}

	::System::Void AF5551CC571DD40D(::ABC::Config::WwiseEvent E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::WwiseEvent))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_AF5551CC571DD40D_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::String* E333AFBE248BFDBF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_E333AFBE248BFDBF_OFFSET))(this);
	}

	::System::UInt32 B59A8AF4AD062023()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + F962BB4FAE46F9DB_B59A8AF4AD062023_OFFSET))(this);
	}
};
