#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBIDBCOBLNM;
namespace System { class Object; }

#define EBIDBCOBLNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5188B0)
#define EBIDBCOBLNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5188F0)
#define EBIDBCOBLNM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F518900)

inline static constexpr unsigned int EBIDBCOBLNM___c_TypeDefinitionIndex = 34343;

	class EBIDBCOBLNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBIDBCOBLNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM___C_CTOR_OFFSET))(this);
		}

		::EBIDBCOBLNM* __cctor_b__33_0()
		{
			return ((::EBIDBCOBLNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDBCOBLNM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
