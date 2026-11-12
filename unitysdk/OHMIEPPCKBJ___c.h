#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHMIEPPCKBJ;
namespace System { class Object; }

#define OHMIEPPCKBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F10ED80)
#define OHMIEPPCKBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F10EDC0)
#define OHMIEPPCKBJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F10EDD0)

inline static constexpr unsigned int OHMIEPPCKBJ___c_TypeDefinitionIndex = 35893;

	class OHMIEPPCKBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHMIEPPCKBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ___C_CTOR_OFFSET))(this);
		}

		::OHMIEPPCKBJ* __cctor_b__28_0()
		{
			return ((::OHMIEPPCKBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMIEPPCKBJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
