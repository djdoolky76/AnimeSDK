#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLOICBDOCNJ;
namespace System { class Object; }

#define FLOICBDOCNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DC980)
#define FLOICBDOCNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DC9C0)
#define FLOICBDOCNJ___C___CCTOR_B__103_0_OFFSET UNITYSDK_OFFSET(0x1E3DC9D0)

inline static constexpr unsigned int FLOICBDOCNJ___c_TypeDefinitionIndex = 25081;

	class FLOICBDOCNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOICBDOCNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOICBDOCNJ___C_CTOR_OFFSET))(this);
		}

		::FLOICBDOCNJ* __cctor_b__103_0()
		{
			return ((::FLOICBDOCNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOICBDOCNJ___C___CCTOR_B__103_0_OFFSET))(this);
		}

	};
