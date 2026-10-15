#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMCAGPOHKJJ;
namespace System { class Object; }

#define GMCAGPOHKJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CBA20)
#define GMCAGPOHKJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CBA60)
#define GMCAGPOHKJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4CBA70)

inline static constexpr unsigned int GMCAGPOHKJJ___c_TypeDefinitionIndex = 35089;

	class GMCAGPOHKJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMCAGPOHKJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ___C_CTOR_OFFSET))(this);
		}

		::GMCAGPOHKJJ* __cctor_b__28_0()
		{
			return ((::GMCAGPOHKJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
