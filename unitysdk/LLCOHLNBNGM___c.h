#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLCOHLNBNGM;
namespace System { class Object; }

#define LLCOHLNBNGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96C1D0)
#define LLCOHLNBNGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96C210)
#define LLCOHLNBNGM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E96C220)

inline static constexpr unsigned int LLCOHLNBNGM___c_TypeDefinitionIndex = 32507;

	class LLCOHLNBNGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCOHLNBNGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM___C_CTOR_OFFSET))(this);
		}

		::LLCOHLNBNGM* __cctor_b__43_0()
		{
			return ((::LLCOHLNBNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
