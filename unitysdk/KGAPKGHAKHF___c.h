#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGAPKGHAKHF;
namespace System { class Object; }

#define KGAPKGHAKHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E807360)
#define KGAPKGHAKHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E807390)
#define KGAPKGHAKHF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8073A0)

inline static constexpr unsigned int KGAPKGHAKHF___c_TypeDefinitionIndex = 34526;

	class KGAPKGHAKHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGAPKGHAKHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF___C_CTOR_OFFSET))(this);
		}

		::KGAPKGHAKHF* __cctor_b__28_0()
		{
			return ((::KGAPKGHAKHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAPKGHAKHF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
