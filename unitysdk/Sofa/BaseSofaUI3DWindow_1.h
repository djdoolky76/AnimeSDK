#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaUI3DWindow.h"
class BOJOBHMEEIH;
class PGLLCPNEHDO;
namespace System { class IDisposable; }

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaUI3DWindow_1_TypeDefinitionIndex = 49693;

	template <typename T>
	class BaseSofaUI3DWindow_1 : public ::Sofa::BaseSofaUI3DWindow
	{
	public:
		T _ViewModel; // 0x0
		::BOJOBHMEEIH* _Messenger; // 0x0
		::PGLLCPNEHDO* _StagecraftEnvironment; // 0x0
		::System::IDisposable* _ReactiveBindingDisposable; // 0x0
	};
}
