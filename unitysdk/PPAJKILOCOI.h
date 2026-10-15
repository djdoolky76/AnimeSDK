#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace RPG::Client { class NetPacket; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PPAJKILOCOI_CCTOR_OFFSET UNITYSDK_OFFSET(0xC372DF0)
#define PPAJKILOCOI_DKLLOMMLDJB_OFFSET UNITYSDK_OFFSET(0xC3729F0)
#define PPAJKILOCOI_DLHACJMNKEM_OFFSET UNITYSDK_OFFSET(0xC372B20)
#define PPAJKILOCOI_HIBDOFIDBIB_OFFSET UNITYSDK_OFFSET(0xC372C70)
#define PPAJKILOCOI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC370590)
#define PPAJKILOCOI_LBMJMGMMALD_OFFSET UNITYSDK_OFFSET(0xC372C10)
#define PPAJKILOCOI_LMLNKBPEDBI_OFFSET UNITYSDK_OFFSET(0xC372950)

inline static constexpr unsigned int PPAJKILOCOI_TypeDefinitionIndex = 59291;

	class PPAJKILOCOI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet_MKOKMGIHECP()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)UnitySDK::FromName("", "PPAJKILOCOI")->GetStaticField(0xBA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPAJKILOCOI_CCTOR_OFFSET))();
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPAJKILOCOI_KPJGDHLENIP_OFFSET))();
		}

		static ::System::UInt16 LMLNKBPEDBI(::System::RuntimeTypeHandle a1)
		{
			return ((::System::UInt16(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + PPAJKILOCOI_LMLNKBPEDBI_OFFSET))(a1);
		}

		static ::System::Boolean DKLLOMMLDJB(::System::RuntimeTypeHandle a1, ::System::UInt16 a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeTypeHandle, ::System::UInt16))((::PBYTE)hIl2Cpp + PPAJKILOCOI_DKLLOMMLDJB_OFFSET))(a1, a2);
		}

		static ::System::String* DLHACJMNKEM(::System::UInt16 a1)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + PPAJKILOCOI_DLHACJMNKEM_OFFSET))(a1);
		}

		static ::System::Boolean LBMJMGMMALD(::System::UInt16 a1)
		{
			return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + PPAJKILOCOI_LBMJMGMMALD_OFFSET))(a1);
		}

		static ::System::Object* HIBDOFIDBIB(::RPG::Client::NetPacket* a1, ::System::UInt32 a2)
		{
			return ((::System::Object*(*)(::RPG::Client::NetPacket*, ::System::UInt32))((::PBYTE)hIl2Cpp + PPAJKILOCOI_HIBDOFIDBIB_OFFSET))(a1, a2);
		}

	};
