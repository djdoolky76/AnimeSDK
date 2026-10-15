#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDAACOIKPFC_CTOR_OFFSET UNITYSDK_OFFSET(0x15990770)
#define GDAACOIKPFC_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0x159906F0)

	class GDAACOIKPFC : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*>* OFCKNBEAIDL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAACOIKPFC_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + GDAACOIKPFC_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
