#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MEKLFHEOCDC;
namespace NapProfiler { class FpsCalc; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace System::Threading { class Thread; }

#define NAPPROFILER_PROFILERSERVER_APPENDDATA_OFFSET UNITYSDK_OFFSET(0x14F49350)
#define NAPPROFILER_PROFILERSERVER_CLOSE_OFFSET UNITYSDK_OFFSET(0x14F49680)
#define NAPPROFILER_PROFILERSERVER_GETFPS_OFFSET UNITYSDK_OFFSET(0x14F48ED0)
#define NAPPROFILER_PROFILERSERVER_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0x14F499E0)
#define NAPPROFILER_PROFILERSERVER_HADEPEEANED_OFFSET UNITYSDK_OFFSET(0x14F49C70)
#define NAPPROFILER_PROFILERSERVER_MAGKIFNFMLD_OFFSET UNITYSDK_OFFSET(0x14F4A220)
#define NAPPROFILER_PROFILERSERVER_MNMLODIGJFJ_OFFSET UNITYSDK_OFFSET(0x14F4A020)
#define NAPPROFILER_PROFILERSERVER_ONSTARTUP_OFFSET UNITYSDK_OFFSET(0x14F489D0)
#define NAPPROFILER_PROFILERSERVER_QUERYFPS_OFFSET UNITYSDK_OFFSET(0x14F48D00)
#define NAPPROFILER_PROFILERSERVER_SENDDATA_OFFSET UNITYSDK_OFFSET(0x14F49060)
#define NAPPROFILER_PROFILERSERVER_STARTSERVER_OFFSET UNITYSDK_OFFSET(0x14F48A10)
#define NAPPROFILER_PROFILERSERVER_START_OFFSET UNITYSDK_OFFSET(0x14F49820)
#define NAPPROFILER_PROFILERSERVER_STOPSERVER_OFFSET UNITYSDK_OFFSET(0x14F49470)
#define NAPPROFILER_PROFILERSERVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14F49A60)
#define NAPPROFILER_PROFILERSERVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F49FF0)
#define NAPPROFILER_PROFILERSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x14F49F50)

namespace NapProfiler
{
	inline static constexpr unsigned int ProfilerServer_TypeDefinitionIndex = 40783;

	class ProfilerServer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Object** StaticGet_PIMAICCKPMP()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ProfilerServer_TypeDefinitionIndex)->GetStaticField(0x49140);
		}
		static ::NapProfiler::ProfilerServer** StaticGet_PIGLBPEIAIC()
		{
			return (::NapProfiler::ProfilerServer**)Il2CppClass::FromTypeDefinitionIndex(ProfilerServer_TypeDefinitionIndex)->GetStaticField(0x49148);
		}
		// static const ::System::Int32 Port = 0x1F74; // 0x0
		::System::Net::Sockets::TcpListener* PAJNPEDPFAM; // 0x18
		::System::Threading::Thread* LMDGOHKOCKF; // 0x20
		::System::Net::Sockets::TcpClient* CABCCNNNAIF; // 0x28
		::System::Collections::Concurrent::ConcurrentQueue_1<::MEKLFHEOCDC*>* LCJKJCBCJEN; // 0x30
		::NapProfiler::FpsCalc* IPALFBAFKKA; // 0x38
		::System::String* KKIKNLPBIOH; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER__CCTOR_OFFSET))();
		}

		static ::System::Void OnStartup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_ONSTARTUP_OFFSET))();
		}

		static ::System::Void StartServer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_STARTSERVER_OFFSET))();
		}

		static ::System::Single QueryFps()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_QUERYFPS_OFFSET))();
		}

		static ::System::Void SendData(::MEKLFHEOCDC* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::MEKLFHEOCDC*))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_SENDDATA_OFFSET))(LJBPECKCCEA);
		}

		static ::System::Void StopServer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_STOPSERVER_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_START_OFFSET))(this);
		}

		static ::System::String* GetIpAddress()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_GETIPADDRESS_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_UPDATE_OFFSET))(this);
		}

		::System::Single GetFps()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_GETFPS_OFFSET))(this);
		}

		::System::Void AppendData(::MEKLFHEOCDC* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MEKLFHEOCDC*))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_APPENDDATA_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_CLOSE_OFFSET))(this);
		}

		::System::String* MNMLODIGJFJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_MNMLODIGJFJ_OFFSET))(this);
		}

		::System::Void MAGKIFNFMLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_MAGKIFNFMLD_OFFSET))(this);
		}

		::System::Void HADEPEEANED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPPROFILER_PROFILERSERVER_HADEPEEANED_OFFSET))(this);
		}
	};
}
