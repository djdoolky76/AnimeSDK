#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOGLKPIIOKA;
namespace System { class Object; }

#define LOGLKPIIOKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E990290)
#define LOGLKPIIOKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9902D0)
#define LOGLKPIIOKA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9902E0)

inline static constexpr unsigned int LOGLKPIIOKA___c_TypeDefinitionIndex = 26815;

	class LOGLKPIIOKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOGLKPIIOKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA___C_CTOR_OFFSET))(this);
		}

		::LOGLKPIIOKA* __cctor_b__28_0()
		{
			return ((::LOGLKPIIOKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGLKPIIOKA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
