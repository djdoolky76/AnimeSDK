#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMJEIBGACMD;
namespace System { class Object; }

#define JMJEIBGACMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E760BA0)
#define JMJEIBGACMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E760BD0)
#define JMJEIBGACMD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E760BE0)

inline static constexpr unsigned int JMJEIBGACMD___c_TypeDefinitionIndex = 33369;

	class JMJEIBGACMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMJEIBGACMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJEIBGACMD___C_CTOR_OFFSET))(this);
		}

		::JMJEIBGACMD* __cctor_b__33_0()
		{
			return ((::JMJEIBGACMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJEIBGACMD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
