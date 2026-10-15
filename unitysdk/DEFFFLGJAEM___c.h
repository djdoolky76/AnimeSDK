#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEFFFLGJAEM;
namespace System { class Object; }

#define DEFFFLGJAEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E191E60)
#define DEFFFLGJAEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E191EA0)
#define DEFFFLGJAEM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E191EB0)

inline static constexpr unsigned int DEFFFLGJAEM___c_TypeDefinitionIndex = 34904;

	class DEFFFLGJAEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEFFFLGJAEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM___C_CTOR_OFFSET))(this);
		}

		::DEFFFLGJAEM* __cctor_b__28_0()
		{
			return ((::DEFFFLGJAEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFFFLGJAEM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
