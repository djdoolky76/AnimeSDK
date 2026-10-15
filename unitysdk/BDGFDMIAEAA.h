#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class COHADEJAPEF;
class FABKHCPBKHL;
class JMOHKKCNCMA;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDGFDMIAEAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C889770)
#define BDGFDMIAEAA_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C889A10)

inline static constexpr unsigned int BDGFDMIAEAA_TypeDefinitionIndex = 43134;

	class BDGFDMIAEAA : public ::BKABEBEPPJK
	{
	public:
		::System::String* FKFIPBCFLMA; // 0x18
		::COHADEJAPEF* LOALJCPNGLE; // 0x20
		::FABKHCPBKHL* IGHAHBNLIJA; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* LFBOHIFIKBB; // 0x30
		::System::Int32 BFIMIDEOJPI; // 0x38
		::System::Int32 NHBAMPEHAAP; // 0x3C
		::System::Int32 PNKNLDHFMBL; // 0x40
		::System::Void _ctor(::FABKHCPBKHL* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FABKHCPBKHL*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + BDGFDMIAEAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGFDMIAEAA_KDNAAOHECPD_OFFSET))(this);
		}

	};
