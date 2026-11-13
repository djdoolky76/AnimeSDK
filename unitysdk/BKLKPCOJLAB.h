#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHIEHELEMMN;
class KAHKFFDIHNN;

#define BKLKPCOJLAB_CJHBJNLANOI_OFFSET UNITYSDK_OFFSET(0x1A66ADA0)
#define BKLKPCOJLAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A66B7C0)
#define BKLKPCOJLAB_GET_BATTLERESULTENCRYPTKEY_OFFSET UNITYSDK_OFFSET(0x1A66B7A0)
#define BKLKPCOJLAB_GJAFOMJPJIO_OFFSET UNITYSDK_OFFSET(0x1A66B540)
#define BKLKPCOJLAB_LJDHHAFHMLP_OFFSET UNITYSDK_OFFSET(0x1A66AED0)
#define BKLKPCOJLAB_NLGABPIHBEB_OFFSET UNITYSDK_OFFSET(0x1A66B760)
#define BKLKPCOJLAB_SET_BATTLERESULTENCRYPTKEY_OFFSET UNITYSDK_OFFSET(0x1A66B7B0)

inline static constexpr unsigned int BKLKPCOJLAB_TypeDefinitionIndex = 68628;

	class BKLKPCOJLAB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* CILHEPFKKNI; // 0x10
		::System::UInt32 _BattleResultEncryptKey_k__BackingField; // 0x18
		::System::Boolean GLGFBDKFFNB; // 0x1C
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
