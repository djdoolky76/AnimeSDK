#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LENDJHOEABH.h"

class CGKMBHKOFKF;
class GHHOODEIJJH;
class JMPEIAPFCCP;
class MHLOCKICGOJ;
class OKOBPKJMMCL;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HANBKJKMAIL_BFHBKMPHBAL_OFFSET UNITYSDK_OFFSET(0x14926A20)
#define HANBKJKMAIL_FFAJLILFCDB_OFFSET UNITYSDK_OFFSET(0x14926640)
#define HANBKJKMAIL_KKAPHBMBNII_OFFSET UNITYSDK_OFFSET(0x14926220)
#define HANBKJKMAIL_LBNGNDCBFAG_OFFSET UNITYSDK_OFFSET(0x14926430)
#define HANBKJKMAIL_LICMLCBHAND_OFFSET UNITYSDK_OFFSET(0x14926850)
#define HANBKJKMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x14926560)

inline static constexpr unsigned int HANBKJKMAIL_TypeDefinitionIndex = 46752;

class HANBKJKMAIL : public ::LENDJHOEABH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MPPLACOEFGO; // 0x20
	::JMPEIAPFCCP* HMMMOCJAEOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANBKJKMAIL__CTOR_OFFSET))(this);
	}

	::System::Object* KKAPHBMBNII(::System::String* AADJPMHPNAH, ::System::Int32 MBNEAPBPOAK, ::CGKMBHKOFKF* FFNKDGGHBPP)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32, ::CGKMBHKOFKF*))((::PBYTE)hIl2Cpp + HANBKJKMAIL_KKAPHBMBNII_OFFSET))(this, AADJPMHPNAH, MBNEAPBPOAK, FFNKDGGHBPP);
	}

	::GHHOODEIJJH* FFAJLILFCDB(::System::String* AADJPMHPNAH, ::System::Int32 MBNEAPBPOAK, ::CGKMBHKOFKF* FFNKDGGHBPP)
	{
		return ((::GHHOODEIJJH*(*)(::PVOID, ::System::String*, ::System::Int32, ::CGKMBHKOFKF*))((::PBYTE)hIl2Cpp + HANBKJKMAIL_FFAJLILFCDB_OFFSET))(this, AADJPMHPNAH, MBNEAPBPOAK, FFNKDGGHBPP);
	}

	::OKOBPKJMMCL* LICMLCBHAND(::System::Int32 IGAONJCACDK)
	{
		return ((::OKOBPKJMMCL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HANBKJKMAIL_LICMLCBHAND_OFFSET))(this, IGAONJCACDK);
	}

	::GHHOODEIJJH* LBNGNDCBFAG(::System::Int32 AMHFLBPBKLL)
	{
		return ((::GHHOODEIJJH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HANBKJKMAIL_LBNGNDCBFAG_OFFSET))(this, AMHFLBPBKLL);
	}

	::MHLOCKICGOJ* BFHBKMPHBAL(::System::String* HIAIKHDFCLN)
	{
		return ((::MHLOCKICGOJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HANBKJKMAIL_BFHBKMPHBAL_OFFSET))(this, HIAIKHDFCLN);
	}
};
