#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEJOPEHPABO;
namespace System { class Object; }

#define BEJOPEHPABO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA634C0)
#define BEJOPEHPABO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA63500)
#define BEJOPEHPABO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA63510)

inline static constexpr unsigned int BEJOPEHPABO___c_TypeDefinitionIndex = 31793;

	class BEJOPEHPABO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEJOPEHPABO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJOPEHPABO___C_CTOR_OFFSET))(this);
		}

		::BEJOPEHPABO* __cctor_b__38_0()
		{
			return ((::BEJOPEHPABO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJOPEHPABO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
