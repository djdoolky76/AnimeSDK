#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGLLAJMCPKM;
namespace System { class Object; }

#define FGLLAJMCPKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3551E0)
#define FGLLAJMCPKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E355220)
#define FGLLAJMCPKM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E355230)

inline static constexpr unsigned int FGLLAJMCPKM___c_TypeDefinitionIndex = 29489;

	class FGLLAJMCPKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGLLAJMCPKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM___C_CTOR_OFFSET))(this);
		}

		::FGLLAJMCPKM* __cctor_b__28_0()
		{
			return ((::FGLLAJMCPKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGLLAJMCPKM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
