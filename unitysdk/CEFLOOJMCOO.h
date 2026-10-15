#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CEFLOOJMCOO_CTOR_OFFSET UNITYSDK_OFFSET(0xC9CE7D0)
#define CEFLOOJMCOO_PAKFEFGCHFM_OFFSET UNITYSDK_OFFSET(0xC9CE410)

inline static constexpr unsigned int CEFLOOJMCOO_TypeDefinitionIndex = 56083;

	class CEFLOOJMCOO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HPAEMDIADDL; // 0x10
		::System::UInt32 FICENPFBEBB; // 0x18
		::System::UInt32 GEPHKCPLAJF; // 0x1C
		::System::UInt32 JKHKAADJAEN; // 0x20
		::System::UInt32 OGBEHKGJFAF; // 0x24
		static ::Il2CppArray<::System::Byte>** StaticGet_DMMAEFCLCHK()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "CEFLOOJMCOO")->GetStaticField(0x1C210);
		}

		// static const ::System::Object DIAMHJPOGOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFLOOJMCOO_CTOR_OFFSET))(this);
		}

		::System::UInt32 PAKFEFGCHFM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFLOOJMCOO_PAKFEFGCHFM_OFFSET))(this);
		}

	};
