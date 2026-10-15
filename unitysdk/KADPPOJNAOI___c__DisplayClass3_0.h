#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPLMLPKBGGE;
class KADPPOJNAOI;
class PMBMFHMKBNC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KADPPOJNAOI___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D40D0)
#define KADPPOJNAOI___C__DISPLAYCLASS3_0__SAVE_B__0_OFFSET UNITYSDK_OFFSET(0xB2D4140)
#define KADPPOJNAOI___C__DISPLAYCLASS3_0__SAVE_B__2_OFFSET UNITYSDK_OFFSET(0xB2D4170)

inline static constexpr unsigned int KADPPOJNAOI___c__DisplayClass3_0_TypeDefinitionIndex = 80245;

	class KADPPOJNAOI___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::GPLMLPKBGGE* applyingData; // 0x10
		::System::Collections::Generic::List_1<::GPLMLPKBGGE*>* savedData; // 0x18
		::KADPPOJNAOI* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADPPOJNAOI___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Save_b__0(::GPLMLPKBGGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + KADPPOJNAOI___C__DISPLAYCLASS3_0__SAVE_B__0_OFFSET))(this, a1);
		}

		::PMBMFHMKBNC* _Save_b__2(::PMBMFHMKBNC* a1)
		{
			return ((::PMBMFHMKBNC*(*)(::PVOID, ::PMBMFHMKBNC*))((::PBYTE)hIl2Cpp + KADPPOJNAOI___C__DISPLAYCLASS3_0__SAVE_B__2_OFFSET))(this, a1);
		}

	};
