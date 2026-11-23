#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class A9121EC6300692E4;
class E25DF6502BB074C4;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define AC6F34999DEB7364_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x2213E80)
#define AC6F34999DEB7364_A7F3D24D94060653_OFFSET UNITYSDK_OFFSET(0x2213F20)
#define AC6F34999DEB7364_A9A503532C32C986_OFFSET UNITYSDK_OFFSET(0x2214120)
#define AC6F34999DEB7364_AC246D75D29B509C_OFFSET UNITYSDK_OFFSET(0x22144C0)
#define AC6F34999DEB7364_B00446EE8545CE8E_OFFSET UNITYSDK_OFFSET(0x2214A50)
#define AC6F34999DEB7364_B2AF5744595E8604_OFFSET UNITYSDK_OFFSET(0x22146D0)
#define AC6F34999DEB7364_B3A38C6FC598B078_OFFSET UNITYSDK_OFFSET(0x2214030)
#define AC6F34999DEB7364_B50A81212A4E03E0_OFFSET UNITYSDK_OFFSET(0x2214F50)
#define AC6F34999DEB7364_F5AB7B7D55E38C66_OFFSET UNITYSDK_OFFSET(0x22141B0)
#define AC6F34999DEB7364_F734229AF9B232D7_OFFSET UNITYSDK_OFFSET(0x2214CA0)
#define AC6F34999DEB7364_FD0E23AFF04BD657_OFFSET UNITYSDK_OFFSET(0x2214AD0)
#define AC6F34999DEB7364_FE68A6DEC1E8D919_OFFSET UNITYSDK_OFFSET(0x2214240)
#define AC6F34999DEB7364__CTOR_OFFSET UNITYSDK_OFFSET(0x2214FD0)

inline static constexpr unsigned int AC6F34999DEB7364_TypeDefinitionIndex = 9033;

class AC6F34999DEB7364
{
public:
	::System::Collections::Generic::Dictionary_2<::ABC::Config::GUID, ::A9121EC6300692E4*>* A0921B0FCB881EE5; // 0x18
	::ABC::Config::GUID F0B2E7BDA7866A91; // 0x20
	::A9121EC6300692E4* E02E3CBDFF2CE937; // 0x30
	::System::Boolean B360A42BEDD0A03D; // 0x38

	::System::Void B3A38C6FC598B078(::ABC::Config::GUID ED6187AE74CD752F)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::GUID))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_B3A38C6FC598B078_OFFSET))(this, ED6187AE74CD752F);
	}

	::System::Void FE68A6DEC1E8D919(::ABC::Config::GUID AECC71D5E4DCD07D, ::A9121EC6300692E4* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::GUID, ::A9121EC6300692E4*))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_FE68A6DEC1E8D919_OFFSET))(this, AECC71D5E4DCD07D, ACDE58E97E37D13C);
	}

	::System::Void B2AF5744595E8604()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_B2AF5744595E8604_OFFSET))(this);
	}

	::System::Void A9A503532C32C986(::A9121EC6300692E4* A3B0FCD761D041D1)
	{
		return ((::System::Void(*)(::PVOID, ::A9121EC6300692E4*))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_A9A503532C32C986_OFFSET))(this, A3B0FCD761D041D1);
	}

	::System::Void B00446EE8545CE8E(::System::Boolean F2D3B10DCF5A6440)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_B00446EE8545CE8E_OFFSET))(this, F2D3B10DCF5A6440);
	}

	::System::Void F5AB7B7D55E38C66(::A9121EC6300692E4* A3B0FCD761D041D1)
	{
		return ((::System::Void(*)(::PVOID, ::A9121EC6300692E4*))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_F5AB7B7D55E38C66_OFFSET))(this, A3B0FCD761D041D1);
	}

	static ::B07850EA97DBB75A<::ABC::Config::GUID, ::A9121EC6300692E4*> F734229AF9B232D7(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>* AD8E9E4769F675A9)
	{
		return ((::B07850EA97DBB75A<::ABC::Config::GUID, ::A9121EC6300692E4*>(*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>*))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_F734229AF9B232D7_OFFSET))(AD8E9E4769F675A9);
	}

	::System::Void AC246D75D29B509C(::ABC::Config::GUID AECC71D5E4DCD07D, ::A9121EC6300692E4* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::GUID, ::A9121EC6300692E4*))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_AC246D75D29B509C_OFFSET))(this, AECC71D5E4DCD07D, ACDE58E97E37D13C);
	}

	::System::Void _ctor(::E25DF6502BB074C4* B2A3EC7628BD58CA)
	{
		return ((::System::Void(*)(::PVOID, ::E25DF6502BB074C4*))((::PBYTE)hIl2Cpp + AC6F34999DEB7364__CTOR_OFFSET))(this, B2A3EC7628BD58CA);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_A765A1D14770A303_OFFSET))(this);
	}

	static ::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>* B50A81212A4E03E0(::System::Boolean E67E2A5C0B9BA501, ::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>* F12208D11AFCBA67, ::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>* B4AAA42662F8C3C1)
	{
		return ((::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>*(*)(::System::Boolean, ::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>*, ::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>*))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_B50A81212A4E03E0_OFFSET))(E67E2A5C0B9BA501, F12208D11AFCBA67, B4AAA42662F8C3C1);
	}

	::System::Void A7F3D24D94060653(::ABC::Config::GUID ED6187AE74CD752F, ::A9121EC6300692E4* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::GUID, ::A9121EC6300692E4*))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_A7F3D24D94060653_OFFSET))(this, ED6187AE74CD752F, ACDE58E97E37D13C);
	}

	static ::System::Void FD0E23AFF04BD657(::System::Collections::Generic::Dictionary_2<::ABC::Config::GUID, ::A9121EC6300692E4*>* E4154650273BD2D1, ::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>* F12208D11AFCBA67, ::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>* B4AAA42662F8C3C1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::ABC::Config::GUID, ::A9121EC6300692E4*>*, ::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>*, ::ABC::Collections::Pooled::PooledList_1<::System::Collections::Generic::KeyValuePair_2<::ABC::Config::GUID, ::A9121EC6300692E4*>>*))((::PBYTE)hIl2Cpp + AC6F34999DEB7364_FD0E23AFF04BD657_OFFSET))(E4154650273BD2D1, F12208D11AFCBA67, B4AAA42662F8C3C1);
	}
};
