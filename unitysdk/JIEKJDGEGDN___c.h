#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIEKJDGEGDN;
namespace System { class Object; }

#define JIEKJDGEGDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71DBC0)
#define JIEKJDGEGDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71DC00)
#define JIEKJDGEGDN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E71DC10)

inline static constexpr unsigned int JIEKJDGEGDN___c_TypeDefinitionIndex = 29941;

	class JIEKJDGEGDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F840);
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
