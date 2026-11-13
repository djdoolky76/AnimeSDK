#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EMatchAIState.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BGFDLPPHOCI_BDAFHFAGNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x151C0A50)

inline static constexpr unsigned int BGFDLPPHOCI_BDAFHFAGNGM_TypeDefinitionIndex = 78230;

	class BGFDLPPHOCI_BDAFHFAGNGM : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* OOAKNFPEFFM; // 0x10
		::System::Int32 IFGDGFMGPPL; // 0x18
		::System::Int32 ENDDBFOBECF; // 0x1C
		::System::UInt32 ICGACGKHFEO; // 0x20
		::System::Int32 LBPIGGIHDFP; // 0x24
		::System::Single EJGGNMCPPCE; // 0x28
		::System::Int32 LGHELEMDFOH; // 0x2C
		::System::Single KJFPBDLFPNP; // 0x30
		::System::Single EOKJGIJJDNO; // 0x34
		::System::Single LECFECKAEHP; // 0x38
		::System::Single MLOIGCBOAKK; // 0x3C
		::System::Int32 DDBCOKEGBHG; // 0x40
		::System::Single NNMKHMGAABB; // 0x44
		::System::Int32 BAOEPKEFJAD; // 0x48
		::System::Single POPNEGLJCFC; // 0x4C
		::RPG::GameCore::EMatchAIState LNGMMHPDPOJ; // 0x50
		::System::Single EONJIJDIDGO; // 0x54
		::System::Int32 CEJCJCKEJPK; // 0x58
		::System::Single BINMGCNKCBM; // 0x5C
		::System::Int32 FGCGPLJIOPN; // 0x60
		::System::Single GAMDLIEBAFH; // 0x64
		::System::Single PJGNOECFPMF; // 0x68
		::System::Single FPGGDFFMCCC; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFDLPPHOCI_BDAFHFAGNGM_CTOR_OFFSET))(this);
		}

	};
