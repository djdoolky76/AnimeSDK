#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHIEHELEMMN;
class KAHKFFDIHNN;

#define BKLKPCOJLAB_CJHBJNLANOI_OFFSET UNITYSDK_OFFSET(0xBA5CF00)
#define BKLKPCOJLAB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA5D920)
#define BKLKPCOJLAB_GET_BATTLERESULTENCRYPTKEY_OFFSET UNITYSDK_OFFSET(0xBA5D900)
#define BKLKPCOJLAB_GJAFOMJPJIO_OFFSET UNITYSDK_OFFSET(0xBA5D6A0)
#define BKLKPCOJLAB_LJDHHAFHMLP_OFFSET UNITYSDK_OFFSET(0xBA5D030)
#define BKLKPCOJLAB_NLGABPIHBEB_OFFSET UNITYSDK_OFFSET(0xBA5D8C0)
#define BKLKPCOJLAB_SET_BATTLERESULTENCRYPTKEY_OFFSET UNITYSDK_OFFSET(0xBA5D910)

inline static constexpr unsigned int BKLKPCOJLAB_TypeDefinitionIndex = 66692;

	class BKLKPCOJLAB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* CILHEPFKKNI; // 0x10
		::System::Boolean GLGFBDKFFNB; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _BattleResultEncryptKey_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKPCOJLAB_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* CJHBJNLANOI()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKPCOJLAB_CJHBJNLANOI_OFFSET))(this);
		}

		::System::Void LJDHHAFHMLP(::AHIEHELEMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHIEHELEMMN*))((::PBYTE)hIl2Cpp + BKLKPCOJLAB_LJDHHAFHMLP_OFFSET))(this, a1);
		}

		::System::Void GJAFOMJPJIO(::KAHKFFDIHNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAHKFFDIHNN*))((::PBYTE)hIl2Cpp + BKLKPCOJLAB_GJAFOMJPJIO_OFFSET))(this, a1);
		}

		::System::Boolean NLGABPIHBEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKPCOJLAB_NLGABPIHBEB_OFFSET))(this);
		}

		::System::UInt32 get_BattleResultEncryptKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKPCOJLAB_GET_BATTLERESULTENCRYPTKEY_OFFSET))(this);
		}

		::System::Void set_BattleResultEncryptKey(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKLKPCOJLAB_SET_BATTLERESULTENCRYPTKEY_OFFSET))(this, a1);
		}

	};
