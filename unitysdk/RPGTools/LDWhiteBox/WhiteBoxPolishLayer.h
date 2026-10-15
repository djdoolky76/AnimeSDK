#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MDCLPDPECFC;
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A0B50)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xE8A0800)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_GET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0xE8A0820)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_READLAYER_OFFSET UNITYSDK_OFFSET(0xE8A0A20)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xE8A0810)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_STORELAYER_OFFSET UNITYSDK_OFFSET(0xE8A0960)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxPolishLayer_TypeDefinitionIndex = 48957;

	class WhiteBoxPolishLayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _itemCount; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* _serializedLayer; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_SET_ITEMCOUNT_OFFSET))(this, a1);
		}

		::RPGTools::LDWhiteBox::WhiteBoxRegion* get_OwnerRegion()
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_GET_OWNERREGION_OFFSET))(this);
		}

		::System::Void StoreLayer(::MDCLPDPECFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDCLPDPECFC*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_STORELAYER_OFFSET))(this, a1);
		}

		::MDCLPDPECFC* ReadLayer()
		{
			return ((::MDCLPDPECFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPOLISHLAYER_READLAYER_OFFSET))(this);
		}

	};
}
