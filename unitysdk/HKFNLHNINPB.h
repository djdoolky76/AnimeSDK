#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HKFNLHNINPB_CPLDCCJBDOH_OFFSET UNITYSDK_OFFSET(0x16C97D00)
#define HKFNLHNINPB_CTOR_OFFSET UNITYSDK_OFFSET(0x16C97900)
#define HKFNLHNINPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C97D70)
#define HKFNLHNINPB_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16C97D50)
#define HKFNLHNINPB_LJGBKLIKPJP_OFFSET UNITYSDK_OFFSET(0x16C97CB0)
#define HKFNLHNINPB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16C97990)
#define HKFNLHNINPB_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16C97D60)

inline static constexpr unsigned int HKFNLHNINPB_TypeDefinitionIndex = 76808;

	class HKFNLHNINPB : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AMGOFIHIOEK; // 0x10
		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* NJEIIMCMDFN; // 0x18
		::System::Int32 _Current_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + HKFNLHNINPB_CTOR_OFFSET))(this, a1);
		}

		::System::Void LJGBKLIKPJP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKFNLHNINPB_LJGBKLIKPJP_OFFSET))(this, a1);
		}

		::System::Int32 CPLDCCJBDOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFNLHNINPB_CPLDCCJBDOH_OFFSET))(this);
		}

		::System::Int32 get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFNLHNINPB_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKFNLHNINPB_SET_CURRENT_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFNLHNINPB_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFNLHNINPB_DISPOSE_OFFSET))(this);
		}

	};
