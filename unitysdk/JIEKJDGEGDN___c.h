#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIEKJDGEGDN;
namespace System { class Object; }

#define JIEKJDGEGDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA5BBF0)
#define JIEKJDGEGDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5BC30)
#define JIEKJDGEGDN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA5BC40)

inline static constexpr unsigned int JIEKJDGEGDN___c_TypeDefinitionIndex = 30839;

	class JIEKJDGEGDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIEKJDGEGDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEKJDGEGDN___C_CTOR_OFFSET))(this);
		}

		::JIEKJDGEGDN* __cctor_b__33_0()
		{
			return ((::JIEKJDGEGDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEKJDGEGDN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
