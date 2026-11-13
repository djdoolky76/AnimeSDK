#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NEFDNOMJMNF;

#define NEFDNOMJMNF_BBDACIECMML_1_OFFSET UNITYSDK_OFFSET(0x16FD5D00)
#define NEFDNOMJMNF_BBDACIECMML_OFFSET UNITYSDK_OFFSET(0x16FD5C60)
#define NEFDNOMJMNF_CPCDICGNHDO_OFFSET UNITYSDK_OFFSET(0x16FD6030)
#define NEFDNOMJMNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16FD5A80)
#define NEFDNOMJMNF_CTOR_2_OFFSET UNITYSDK_OFFSET(0x16FD5AF0)
#define NEFDNOMJMNF_CTOR_OFFSET UNITYSDK_OFFSET(0x16FD59B0)
#define NEFDNOMJMNF_DKBLODKMHGE_OFFSET UNITYSDK_OFFSET(0x16FD5930)
#define NEFDNOMJMNF_FAHJCBMIFDE_OFFSET UNITYSDK_OFFSET(0x16FD6340)
#define NEFDNOMJMNF_FCOFMLBEGJL_OFFSET UNITYSDK_OFFSET(0x16FD5940)
#define NEFDNOMJMNF_GDCMMBCFGIJ_OFFSET UNITYSDK_OFFSET(0x16FD6440)
#define NEFDNOMJMNF_HBGCLKCCOOE_OFFSET UNITYSDK_OFFSET(0x16FD6220)
#define NEFDNOMJMNF_KJMEMHMLKHJ_OFFSET UNITYSDK_OFFSET(0x16FD5F60)
#define NEFDNOMJMNF_KKNNLILHBDK_1_OFFSET UNITYSDK_OFFSET(0x16FD5E80)
#define NEFDNOMJMNF_KKNNLILHBDK_OFFSET UNITYSDK_OFFSET(0x16FD5DE0)
#define NEFDNOMJMNF_LFBKBOCOIFP_1_OFFSET UNITYSDK_OFFSET(0x16FD5B80)
#define NEFDNOMJMNF_LFBKBOCOIFP_OFFSET UNITYSDK_OFFSET(0x16FD5B10)
#define NEFDNOMJMNF_OJOKOMLHOHE_OFFSET UNITYSDK_OFFSET(0x16FD6150)

inline static constexpr unsigned int NEFDNOMJMNF_TypeDefinitionIndex = 57497;

	class NEFDNOMJMNF : public ::System::Object
	{
	public:
		::System::UInt64 MMBALLEHPBM; // 0x10
		// static const ::System::Object CJCOBNJNDEH; // 0x0
		// static const ::System::Object EMLLBJJINAF; // 0x0
		// static const ::System::Object LFDIGPLIJFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::NEFDNOMJMNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEFDNOMJMNF*))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_CTOR_2_OFFSET))(this, a1);
		}

		::System::UInt64 DKBLODKMHGE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_DKBLODKMHGE_OFFSET))(this);
		}

		::System::Void FCOFMLBEGJL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_FCOFMLBEGJL_OFFSET))(this, a1);
		}

		::System::UInt64 LFBKBOCOIFP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_LFBKBOCOIFP_OFFSET))(this);
		}

		::System::UInt64 LFBKBOCOIFP_1(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_LFBKBOCOIFP_1_OFFSET))(this, a1, a2);
		}

		::System::Int64 BBDACIECMML()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_BBDACIECMML_OFFSET))(this);
		}

		::System::Int64 BBDACIECMML_1(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_BBDACIECMML_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 KKNNLILHBDK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_KKNNLILHBDK_OFFSET))(this);
		}

		::System::Int32 KKNNLILHBDK_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_KKNNLILHBDK_1_OFFSET))(this, a1, a2);
		}

		::System::Double KJMEMHMLKHJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_KJMEMHMLKHJ_OFFSET))(this);
		}

		::System::Double CPCDICGNHDO(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_CPCDICGNHDO_OFFSET))(this, a1, a2);
		}

		::System::Single OJOKOMLHOHE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_OJOKOMLHOHE_OFFSET))(this);
		}

		::System::Single HBGCLKCCOOE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_HBGCLKCCOOE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint FAHJCBMIFDE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_FAHJCBMIFDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GDCMMBCFGIJ(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NEFDNOMJMNF_GDCMMBCFGIJ_OFFSET))(this, a1, a2);
		}

	};
