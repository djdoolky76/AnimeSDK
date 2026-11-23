#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomSourceBase.h"
#include "unitysdk/A83324DFC712E610.h"

class FD58DF262776449E;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define CRIWARE_CRIATOMSOURCE_A30E30E2B8F3A047_OFFSET UNITYSDK_OFFSET(0x180F000)
#define CRIWARE_CRIATOMSOURCE_A510E7DF8AB449F4_OFFSET UNITYSDK_OFFSET(0x2AA1EF0)
#define CRIWARE_CRIATOMSOURCE_AC2A18C882BE0FD9_OFFSET UNITYSDK_OFFSET(0x2AA2080)
#define CRIWARE_CRIATOMSOURCE_E5D2978E429BE48F_OFFSET UNITYSDK_OFFSET(0x2AA1F30)
#define CRIWARE_CRIATOMSOURCE_E727E8586AAFF9E2_OFFSET UNITYSDK_OFFSET(0x17F7020)
#define CRIWARE_CRIATOMSOURCE_F77DEB89614CC6F9_OFFSET UNITYSDK_OFFSET(0x17F7050)
#define CRIWARE_CRIATOMSOURCE_FA419DEAB00448C1_OFFSET UNITYSDK_OFFSET(0x17F7030)
#define CRIWARE_CRIATOMSOURCE_FC31EC4F0AF07590_OFFSET UNITYSDK_OFFSET(0x2AA1FC0)
#define CRIWARE_CRIATOMSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x2AA2090)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomSource_TypeDefinitionIndex = 19064;

	class CriAtomSource : public ::CriWare::CriAtomSourceBase
	{
	public:
		::System::String* _cueName; // 0xA8
		::System::String* _cueSheet; // 0xB0

		::System::Collections::IEnumerator* E5D2978E429BE48F(::System::String* B5C6677E8C563AA0)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_E5D2978E429BE48F_OFFSET))(this, B5C6677E8C563AA0);
		}

		::System::String* FA419DEAB00448C1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_FA419DEAB00448C1_OFFSET))(this);
		}

		::System::Void FC31EC4F0AF07590()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_FC31EC4F0AF07590_OFFSET))(this);
		}

		::A83324DFC712E610 AC2A18C882BE0FD9()
		{
			return ((::A83324DFC712E610(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_AC2A18C882BE0FD9_OFFSET))(this);
		}

		::System::Void F77DEB89614CC6F9(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_F77DEB89614CC6F9_OFFSET))(this, E937D4885DAA1AE8);
		}

		::FD58DF262776449E* A510E7DF8AB449F4()
		{
			return ((::FD58DF262776449E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_A510E7DF8AB449F4_OFFSET))(this);
		}

		::System::String* E727E8586AAFF9E2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_E727E8586AAFF9E2_OFFSET))(this);
		}

		::System::Void A30E30E2B8F3A047(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE_A30E30E2B8F3A047_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCE__CTOR_OFFSET))(this);
		}
	};
}
