#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANEIPABEMDH;
namespace System { class Object; }

#define ANEIPABEMDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F91B9F0)
#define ANEIPABEMDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F91BA30)
#define ANEIPABEMDH___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1F91BA40)

inline static constexpr unsigned int ANEIPABEMDH___c_TypeDefinitionIndex = 27397;

	class ANEIPABEMDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x427F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANEIPABEMDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEIPABEMDH___C_CTOR_OFFSET))(this);
		}

		::ANEIPABEMDH* __cctor_b__73_0()
		{
			return ((::ANEIPABEMDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEIPABEMDH___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
