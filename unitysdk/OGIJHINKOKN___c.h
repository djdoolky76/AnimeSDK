#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGIJHINKOKN;
namespace System { class Object; }

#define OGIJHINKOKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0FD730)
#define OGIJHINKOKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0FD770)
#define OGIJHINKOKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F0FD780)

inline static constexpr unsigned int OGIJHINKOKN___c_TypeDefinitionIndex = 33014;

	class OGIJHINKOKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGIJHINKOKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIJHINKOKN___C_CTOR_OFFSET))(this);
		}

		::OGIJHINKOKN* __cctor_b__23_0()
		{
			return ((::OGIJHINKOKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIJHINKOKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
